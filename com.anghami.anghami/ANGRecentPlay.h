//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSString;

@interface ANGRecentPlay : RLMObject
{
    _Bool _hideFromRecentPlays;
    int _mediaType;
    NSString *_identifier;
    NSString *_objectDictString;
    double _timestamp;
}

+ (id)primaryKey;
@property _Bool hideFromRecentPlays; // @synthesize hideFromRecentPlays=_hideFromRecentPlays;
@property double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *objectDictString; // @synthesize objectDictString=_objectDictString;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property int mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
