//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol SPTPartnerIntegration <NSObject>
@property(readonly, nonatomic) unsigned long long category;
@property(readonly, nonatomic) _Bool isEnabled;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) NSString *name;
- (void)setEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
@end

