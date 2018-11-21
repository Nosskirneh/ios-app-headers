//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter, SPTViewLogger;

@interface SPTHiddenContentPerfLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
}

@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logViewDidFailToLoadWithError:(id)arg1 pageIdentifier:(id)arg2;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2;

@end

