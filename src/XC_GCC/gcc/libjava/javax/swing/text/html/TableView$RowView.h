
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_TableView$RowView__
#define __javax_swing_text_html_TableView$RowView__

#pragma interface

#include <javax/swing/text/html/BlockView.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class SizeRequirements;
      namespace text
      {
          class Element;
          class View;
        namespace html
        {
            class TableView;
            class TableView$RowView;
        }
      }
    }
  }
}

class javax::swing::text::html::TableView$RowView : public ::javax::swing::text::html::BlockView
{

public: // actually package-private
  TableView$RowView(::javax::swing::text::html::TableView *, ::javax::swing::text::Element *);
public:
  virtual void replace(jint, jint, JArray< ::javax::swing::text::View * > *);
  virtual jfloat getMaximumSpan(jint);
  virtual jfloat getMinimumSpan(jint);
  virtual jfloat getPreferredSpan(jint);
public: // actually protected
  virtual ::javax::swing::SizeRequirements * calculateMajorAxisRequirements(jint, ::javax::swing::SizeRequirements *);
  virtual void layoutMinorAxis(jint, jint, JArray< jint > *, JArray< jint > *);
  virtual void layoutMajorAxis(jint, jint, JArray< jint > *, JArray< jint > *);
public: // actually package-private
  JArray< jboolean > * __attribute__((aligned(__alignof__( ::javax::swing::text::html::BlockView)))) overlap;
  jint rowIndex;
  ::javax::swing::text::html::TableView * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_TableView$RowView__