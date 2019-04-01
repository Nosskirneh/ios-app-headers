//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageLineGenerator : GPUImageFilter
{
    int lineWidthUniform;
    int lineColorUniform;
    float *lineCoordinates;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)setLineColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)renderLinesFromArray:(float *)arg1 count:(unsigned long long)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (void)generateLineCoordinates;
- (void)dealloc;
- (id)init;

@end

