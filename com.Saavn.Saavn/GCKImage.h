//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSURL;

@interface GCKImage : NSObject <NSCopying, NSCoding>
{
    NSURL *_URL;
    long long _width;
    long long _height;
}

@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithURL:(id)arg1 width:(long long)arg2 height:(long long)arg3;

@end

