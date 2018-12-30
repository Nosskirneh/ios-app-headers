//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface PMVNativeAdContent : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *__rawContent;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDictionary *_rawContent; // @synthesize _rawContent=__rawContent;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *creativeInstance;
@property(readonly, copy) NSDictionary *customFields;
- (id)dateFormat;
@property(readonly, copy) NSDate *pubDate;
@property(readonly, copy) NSString *sponsorName;
@property(readonly, copy) NSString *authorName;
@property(readonly, copy) NSString *summary;
@property(readonly, copy) NSString *title;
@property(readonly, copy) NSURL *destination;
@property(readonly) long long experienceType;
- (id)thumbnailImageURLWithAdManager:(id)arg1 width:(id)arg2 height:(id)arg3;
- (id)primaryImageURLWithAdManager:(id)arg1 width:(id)arg2 height:(id)arg3;
- (id)javascriptWithAdManager:(id)arg1 cssSelector:(id)arg2 mediaSize:(struct CGSize)arg3 error:(id *)arg4;
- (id)articleContentWithType:(long long)arg1;
@property(readonly, copy) NSDictionary *rawContent;
- (id)description;
- (id)initWithJSONObject:(id)arg1;

@end

