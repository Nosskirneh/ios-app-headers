//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTSectionControllerProtocol-Protocol.h"

@class NSString;
@protocol YTFeedStatusViewDelegate;

@protocol YTStatusViewSectionControllerProtocol <YTSectionControllerProtocol>
@property(copy, nonatomic) NSString *emptyMessage;
@property(nonatomic) int statusViewStyle;
@property(nonatomic) __weak id <YTFeedStatusViewDelegate> statusViewDelegate;
- (void)setState:(int)arg1;
- (int)state;

@optional
- (void)setActive:(_Bool)arg1;
@end

