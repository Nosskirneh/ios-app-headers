//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GRWCachedNetworkImage, NSURL;

@interface GRWRemoteImage : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _fetchCompletion;
    GRWCachedNetworkImage *_networkImage;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) GRWCachedNetworkImage *networkImage; // @synthesize networkImage=_networkImage;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletion; // @synthesize fetchCompletion=_fetchCompletion;
- (void).cxx_destruct;
- (id)description;
- (void)handleNotification:(id)arg1;
- (void)setUpNotifications;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fetchImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchImage;
- (id)initWithURL:(id)arg1;

@end

