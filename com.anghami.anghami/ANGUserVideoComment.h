//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ANGUserVideoComment : NSObject
{
    NSString *_text;
    NSDate *_sentTime;
    NSString *_senderId;
    NSString *_senderName;
    NSString *_senderImage;
    NSString *_commentId;
    NSString *_relatedVideoId;
}

@property(retain, nonatomic) NSString *relatedVideoId; // @synthesize relatedVideoId=_relatedVideoId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *senderImage; // @synthesize senderImage=_senderImage;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(retain, nonatomic) NSDate *sentTime; // @synthesize sentTime=_sentTime;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isOwnComment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (void)postWithDelegate:(id)arg1;
- (void)reportWithDelegate:(id)arg1 reason:(id)arg2;
- (void)deleteWithDelegate:(id)arg1;

@end
