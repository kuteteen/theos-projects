/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CCColorCube : XXUnknownSuperclass {
	CCCubeCell cells[27000];
}
-(char*)rawPixelDataFromImage:(id)image pixelCount:(unsigned*)count;
-(void)clearCells;
-(id)extractColorsFromImage:(id)image flags:(unsigned)flags count:(unsigned)count;
-(id)extractDarkColorsFromImage:(id)image avoidColor:(id)color count:(unsigned)count;
-(id)extractBrightColorsFromImage:(id)image avoidColor:(id)color count:(unsigned)count;
-(id)extractColorsFromImage:(id)image flags:(unsigned)flags avoidColor:(id)color;
-(id)extractColorsFromImage:(id)image flags:(unsigned)flags;
-(id)extractAndFilterMaximaFromImage:(id)image flags:(unsigned)flags;
-(id)colorsFromMaxima:(id)maxima;
-(id)performAdaptiveDistinctFilteringForMaxima:(id)maxima count:(unsigned)count;
-(id)orderByDarkness:(id)darkness;
-(id)orderByBrightness:(id)brightness;
-(id)filterMaxima:(id)maxima tooCloseToColor:(id)color;
-(id)filterDistinctMaxima:(id)maxima threshold:(float)threshold;
-(id)findAndSortMaximaInImage:(id)image flags:(unsigned)flags;
-(id)findLocalMaximaInImage:(id)image flags:(unsigned)flags;
-(void)dealloc;
-(id)init;
@end

