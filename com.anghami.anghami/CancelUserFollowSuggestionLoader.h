//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface CancelUserFollowSuggestionLoader : Loader
{
    NSString *_profileId;
}

@property(retain) NSString *profileId; // @synthesize profileId=_profileId;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;

@end
