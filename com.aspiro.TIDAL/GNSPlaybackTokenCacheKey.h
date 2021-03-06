//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;
@protocol GNSAudioEncoding;

@interface GNSPlaybackTokenCacheKey : NSObject <NSCopying>
{
    NSData *_tokenData;
    id <GNSAudioEncoding> _tokenEncoding;
}

@property(retain, nonatomic) id <GNSAudioEncoding> tokenEncoding; // @synthesize tokenEncoding=_tokenEncoding;
@property(retain, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

