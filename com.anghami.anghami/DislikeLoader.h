//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface DislikeLoader : Loader
{
    NSString *_songId;
    NSString *_sourceEntity;
    NSString *_sourceId;
}

@property(retain) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain) NSString *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
@property(retain) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;

@end

