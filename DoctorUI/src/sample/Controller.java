package sample;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.geometry.Rectangle2D;
import javafx.scene.SnapshotParameters;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.image.WritableImage;
import javafx.scene.input.DragEvent;
import javafx.scene.input.ScrollEvent;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.StackPane;
import javafx.stage.FileChooser;
import javafx.stage.Stage;


import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.net.MalformedURLException;

public class Controller {
    @FXML
    private StackPane stackpane;

    File file1 = new File("C:\\Users\\qwerty\\IdeaProjects\\DoctorUI");

    FileChooser.ExtensionFilter exf = new FileChooser.ExtensionFilter(".png","*.png");


    public void initialize(){

    }
    public void handleButton(){
        try {
            FileChooser fc = new FileChooser();
            fc.setTitle("Choose picture");
            fc.getExtensionFilters().add(exf);
            fc.setInitialDirectory(file1);
            File file = fc.showOpenDialog(stackpane.getScene().getWindow());
            Image img = new Image(file.toURI().toURL().toString());
            ImageView imgview = new ImageView(img);
            stackpane.getChildren().add(imgview);
            stackpane.getChildren().get(0).setDisable(true);
            stackpane.getChildren().get(0).setVisible(false);

        }
        catch (MalformedURLException ex){
            System.err.print(ex);
        }
        catch (IOException ex){
            System.err.print(ex);
        }
        catch (NullPointerException ex){
            System.out.println("Choose file");
        }
    }

    public void handleScroll(ScrollEvent e){
        if (e.getDeltaY()>0) {
            ((ImageView) stackpane.getChildren().get(1)).setScaleX(((ImageView) stackpane.getChildren().get(1)).getScaleX() + 0.1);
            ((ImageView) stackpane.getChildren().get(1)).setScaleY(((ImageView) stackpane.getChildren().get(1)).getScaleY() + 0.1);
        }
        else {
            ((ImageView) stackpane.getChildren().get(1)).setScaleX(((ImageView) stackpane.getChildren().get(1)).getScaleX() - 0.1);
            ((ImageView) stackpane.getChildren().get(1)).setScaleY(((ImageView) stackpane.getChildren().get(1)).getScaleY() - 0.1);
        }

    }

    public void handleDrag(DragEvent e){
        stackpane.getChildren().get(1).relocate(stackpane.getChildren().get(1).getLayoutX()+1,stackpane.getChildren().get(1).getLayoutY()+1);
    }
}
