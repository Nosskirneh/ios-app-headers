//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol HAMMediaSourceDelegate <NSObject>
- (void)mediaSourceDidFailWithError:(NSError *)arg1;
- (void)mediaSourceSeekableTimeRangeDidChange:(CDStruct_e83c9415)arg1;
- (void)mediaSourceSetCurrentTime:(CDStruct_1b6d18a9)arg1;
@end
