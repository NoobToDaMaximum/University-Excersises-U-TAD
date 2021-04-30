package CasoDeEstudio;
import java.util.Observable;

public class Libro extends Observable {
    private String titulo;
    private String autor;
    private Boolean danado;

    public Libro(String titulo, String autor, Boolean danado){
        super();
        this.titulo = titulo;
        this.autor = autor;
        this.danado = danado;
    }

    public Boolean getDanado() {
        return danado;
    }

    public void setDanado(Boolean danado) {
        this.danado = danado;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
}
