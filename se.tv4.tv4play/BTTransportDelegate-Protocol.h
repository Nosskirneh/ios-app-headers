//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol BTTransportDelegate <NSObject>
- (void)request:(NSString *)arg1 didFailWithError:(NSError *)arg2;
- (void)didFinishSuccessfully:(NSString *)arg1;
@end

