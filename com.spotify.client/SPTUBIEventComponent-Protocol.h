//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, NSURL;

@protocol SPTUBIEventComponent <NSObject>
@property(readonly, copy, nonatomic) NSString *reason;
@property(readonly, copy, nonatomic) NSURL *uri;
@property(readonly, copy, nonatomic) NSNumber *position;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *name;
@end

