//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol HAMMP4DataAccumulatorDelegate <NSObject>
- (void)dataAccumulatorDidComplete;
- (void)dataAccumulatorDidCompleteBox:(struct BoxReader *)arg1 startOffset:(int)arg2;
- (void)dataAccumulatorDidErrorWithDetails:(NSString *)arg1 fatal:(_Bool)arg2;
@end

