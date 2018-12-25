//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FLAnimatedImageFrameDataSource-Protocol.h"

@class NSString;

@interface FLAnimatedGIFDataSource : NSObject <FLAnimatedImageFrameDataSource>
{
    struct CGImageSource *_imageSource;
}

+ (id)predrawnImageFromImage:(id)arg1;
- (id)blendImage:(id)arg1 atIndex:(unsigned long long)arg2 withPreviousImage:(id)arg3;
- (_Bool)frameRequiresBlendingWithPreviousFrame:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithImageSource:(struct CGImageSource *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

