/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol MaskEngineWrapper2Delegate;

__attribute__((visibility("hidden")))
@interface MaskEngineWrapper2 : XXUnknownSuperclass {
	MaskEngine2* _maskEngine;
	BOOL _assetsLoaded;
	BOOL _maskLoaded;
	id<MaskEngineWrapper2Delegate> _delegate;
}
@property(assign, nonatomic) __weak id<MaskEngineWrapper2Delegate> delegate;
@property(assign, nonatomic) BOOL maskLoaded;
@property(assign, nonatomic) BOOL assetsLoaded;
+(unsigned)engineVersion;
-(void).cxx_destruct;
-(void)onMaskEngine_VideoDataReady:(VideoData*)ready;
-(void)onMaskEngine_MaskLoadStatusChanged:(const char*)changed :(int)arg2;
-(void)onMaskEngine_RenderLoadStatusChanged:(bool)changed;
-(void)onMaskEngine_ModelLoadStatusChanged:(bool)changed;
-(void)pushPixelBuffer:(char*)buffer width:(unsigned)width height:(unsigned)height backCamera:(BOOL)camera photo:(BOOL)photo timestampMs:(unsigned)ms;
-(void)unloadMask;
-(void)loadMaskWithJsonFilePath:(id)jsonFilePath;
-(void)loadAssetsWithPath:(id)path;
-(id)init;
-(void)cleanup;
-(void)dealloc;
@end

