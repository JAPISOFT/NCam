// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_dnd_DragSourceContext__
#define __java_awt_dnd_DragSourceContext__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Component;
      class Point;
      class Image;
      namespace datatransfer
      {
        class Transferable;
      }
      class Cursor;
      namespace dnd
      {
        class DragSourceContext;
        class DragSourceDropEvent;
        class DragSourceEvent;
        class DragSourceDragEvent;
        class DragSource;
        class DragSourceListener;
        class DragGestureEvent;
        namespace peer
        {
          class DragSourceContextPeer;
        }
      }
    }
  }
}

class java::awt::dnd::DragSourceContext : public ::java::lang::Object
{
public:
  DragSourceContext (::java::awt::dnd::peer::DragSourceContextPeer *, ::java::awt::dnd::DragGestureEvent *, ::java::awt::Cursor *, ::java::awt::Image *, ::java::awt::Point *, ::java::awt::datatransfer::Transferable *, ::java::awt::dnd::DragSourceListener *);
  virtual ::java::awt::dnd::DragSource *getDragSource ();
  virtual ::java::awt::Component *getComponent ();
  virtual ::java::awt::dnd::DragGestureEvent *getTrigger () { return trigger; }
  virtual jint getSourceActions ();
  virtual void setCursor (::java::awt::Cursor *);
  virtual ::java::awt::Cursor *getCursor () { return cursor; }
  virtual void addDragSourceListener (::java::awt::dnd::DragSourceListener *);
  virtual void removeDragSourceListener (::java::awt::dnd::DragSourceListener *);
  virtual void transferablesFlavorsChanged () { }
  virtual void dragEnter (::java::awt::dnd::DragSourceDragEvent *) { }
  virtual void dragOver (::java::awt::dnd::DragSourceDragEvent *) { }
  virtual void dragExit (::java::awt::dnd::DragSourceEvent *) { }
  virtual void dropActionChanged (::java::awt::dnd::DragSourceDragEvent *) { }
  virtual void dragDropEnd (::java::awt::dnd::DragSourceDropEvent *) { }
  virtual void dragMouseMoved (::java::awt::dnd::DragSourceDragEvent *) { }
  virtual ::java::awt::datatransfer::Transferable *getTransferable () { return transferable; }
public:  // actually protected
  virtual void updateCurrentCursor (jint, jint, jint) { }
public: // actually package-private
  static const jlong serialVersionUID = -115407898692194719LL;
public:  // actually protected
  static const jint DEFAULT = 0L;
  static const jint ENTER = 1L;
  static const jint OVER = 2L;
  static const jint CHANGED = 3L;
private:
  ::java::awt::dnd::peer::DragSourceContextPeer * __attribute__((aligned(__alignof__( ::java::lang::Object )))) peer;
  ::java::awt::Cursor *cursor;
  ::java::awt::datatransfer::Transferable *transferable;
  ::java::awt::dnd::DragGestureEvent *trigger;
  ::java::awt::dnd::DragSourceListener *dragSourceListener;
  jboolean useCustomCursor;
  jint sourceActions;
  ::java::awt::Image *image;
  ::java::awt::Point *offset;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_awt_dnd_DragSourceContext__ */