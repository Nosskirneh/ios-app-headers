//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSDate, NSString;

@interface ANGSongLikedRecord : RLMObject
{
    NSString *_songId;
    NSDate *_date;
}

+ (id)primaryKey;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;

@end

