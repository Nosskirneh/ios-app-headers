//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface DeezerTalkEpisodeBookmarkData : NSObject <NSCoding>
{
    double _bookmark;
    long long _heardStatus;
    NSDate *_date;
}

@property(retain) NSDate *date; // @synthesize date=_date;
@property long long heardStatus; // @synthesize heardStatus=_heardStatus;
@property double bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

