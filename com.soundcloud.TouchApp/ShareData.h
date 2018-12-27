//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ShareData : NSObject
{
    NSString *_title;
    NSString *_artist;
    NSString *_permalink;
    NSString *_link;
    NSString *_text;
}

+ (id)customShareWithTitle:(id)arg1 text:(id)arg2 link:(id)arg3;
+ (id)tellAFriendWithTitle:(id)arg1 link:(id)arg2;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *link; // @synthesize link=_link;
@property(readonly, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(readonly, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 link:(id)arg2;
- (id)initWithTitle:(id)arg1 text:(id)arg2 link:(id)arg3;
- (id)initWithTitle:(id)arg1 artist:(id)arg2 permalink:(id)arg3;

@end

