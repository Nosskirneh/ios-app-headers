//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTFreeTierEntityHeartBanButtonViewModel <NSObject>
@property(readonly, nonatomic) NSString *actionName;
@property(readonly, nonatomic) long long actionIcon;
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) __weak id <SPTFreeTierEntityHeartBanButtonViewModelDelegate> delegate;
- (void)tapHeartBanButton;
@end

