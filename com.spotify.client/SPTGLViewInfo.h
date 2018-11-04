//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTGLViewInfo : NSObject
{
    double _screenDensity;
    struct CGSize _size;
    struct CGSize _thumbOriginalSize;
    struct CGSize _thumbSize;
    struct CGPoint _thumbPos;
    struct CGPoint _coverArtPos;
    struct CGSize _coverArtSize;
}

@property(nonatomic) double screenDensity; // @synthesize screenDensity=_screenDensity;
@property(nonatomic) struct CGSize coverArtSize; // @synthesize coverArtSize=_coverArtSize;
@property(nonatomic) struct CGPoint coverArtPos; // @synthesize coverArtPos=_coverArtPos;
@property(nonatomic) struct CGPoint thumbPos; // @synthesize thumbPos=_thumbPos;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) struct CGSize thumbOriginalSize; // @synthesize thumbOriginalSize=_thumbOriginalSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (struct CGPoint)coverArtCenter;
- (struct CGPoint)thumbCenter;
- (double)thumbOriginalRadius;
- (double)thumbRadius;

@end

