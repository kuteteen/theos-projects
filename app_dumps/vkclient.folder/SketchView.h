/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "ColorPaletteViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class DrawView, UIBarButtonItem, UIButton, BrushSizeSlider, NSString, ColorPaletteView, NSArray;

__attribute__((visibility("hidden")))
@interface SketchView : XXUnknownSuperclass <ColorPaletteViewDelegate> {
	BOOL _graffitiMode;
	BOOL _shouldShowInterface;
	DrawView* _drawView;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	NSArray* _rotatingViews;
	BrushSizeSlider* _sizeSlider;
	NSArray* _brushButtons;
	NSArray* _hideableViews;
	ColorPaletteView* _colorPaletteView;
	UIButton* _undoButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSArray* rotatingViews;
@property(retain, nonatomic) UIBarButtonItem* cancelButton;
@property(retain, nonatomic) UIBarButtonItem* doneButton;
@property(retain, nonatomic) UIButton* undoButton;
@property(retain, nonatomic) ColorPaletteView* colorPaletteView;
@property(assign, nonatomic) BOOL shouldShowInterface;
@property(retain, nonatomic) NSArray* hideableViews;
@property(retain, nonatomic) NSArray* brushButtons;
@property(retain, nonatomic) BrushSizeSlider* sizeSlider;
@property(retain, nonatomic) DrawView* drawView;
@property(assign, nonatomic, getter=isGraffitiMode) BOOL graffitiMode;
-(void).cxx_destruct;
-(void)restoreState;
-(void)saveState;
-(BOOL)isEmpty;
-(void)renderGraffiti:(id)graffiti;
-(id)renderImageWithSize:(CGSize)size;
-(id)screenImage;
-(void)colorPaletteView:(id)view didSelectColor:(id)color;
-(void)updateBrush;
-(void)setBrushColor:(id)color;
-(void)actionBrushButton:(id)button;
-(void)actionSizeSlider:(id)slider;
-(void)hideSizeSlider;
-(void)showSizeSlider;
-(void)actionSizeButton;
-(void)actionUndo;
-(void)actionClear;
-(void)actionTouchDownAndUp:(id)up;
-(void)updateEmptyState;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame graffitiMode:(BOOL)mode;
-(id)initWithFrame:(CGRect)frame;
@end

