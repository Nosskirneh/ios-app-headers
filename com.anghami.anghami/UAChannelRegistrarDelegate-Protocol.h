//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UAChannelRegistrationPayload;

@protocol UAChannelRegistrarDelegate <NSObject>

@optional
- (void)channelCreated:(NSString *)arg1 channelLocation:(NSString *)arg2 existing:(_Bool)arg3;
- (void)registrationSucceededWithPayload:(UAChannelRegistrationPayload *)arg1;
- (void)registrationFailedWithPayload:(UAChannelRegistrationPayload *)arg1;
@end

