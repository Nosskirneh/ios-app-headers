//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HAMMP4DataAccumulatorMediaDataDelegate <NSObject>
- (void)dataAccumulatorDidReceiveMediaBytes:(const char *)arg1 length:(int)arg2;
- (void)dataAccumulatorDidBeginMediaDataBoxWithSize:(int)arg1 startOffset:(int)arg2;
@end

