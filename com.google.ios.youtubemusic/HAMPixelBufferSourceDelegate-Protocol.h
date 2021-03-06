//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMMediaSourceDelegate-Protocol.h"

@class HAMPixelBuffer, NSObject;
@protocol HAMPixelBufferSource, OS_dispatch_queue;

@protocol HAMPixelBufferSourceDelegate <HAMMediaSourceDelegate>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pixelBufferDeliveryQueue;
- (void)pixelBufferSource:(id <HAMPixelBufferSource>)arg1 didDecodePixelBuffer:(HAMPixelBuffer *)arg2;
@end

