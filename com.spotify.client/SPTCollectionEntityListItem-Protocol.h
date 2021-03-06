//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL;

@protocol SPTCollectionEntityListItem <NSObject>
@property(readonly, nonatomic) NSURL *offlineURL;
@property(readonly, copy, nonatomic) NSString *loggingContext;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSURL *trackURL;
@property(readonly, nonatomic) long long icon;
@property(readonly, copy, nonatomic) NSURL *entityURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)action;

@optional
@property(readonly, nonatomic) NSDate *publishDate;
@property(readonly, nonatomic) _Bool isNew;
@end

