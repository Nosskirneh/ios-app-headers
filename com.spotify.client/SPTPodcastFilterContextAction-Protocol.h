//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTPodcastFilterContextAction <NSObject>
@property(readonly, nonatomic) _Bool active;
@property(readonly, nonatomic) long long accessoryIcon;
@property(readonly, nonatomic) long long icon;
@property(readonly, copy, nonatomic) NSString *title;
- (_Bool)execute;
@end

