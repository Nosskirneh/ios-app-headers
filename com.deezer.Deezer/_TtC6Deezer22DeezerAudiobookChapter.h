//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerTrack.h"

@class NSArray, NSString;

@interface _TtC6Deezer22DeezerAudiobookChapter : DeezerTrack
{
    // Error parsing type: , name: audiobookId
    // Error parsing type: , name: authors
    // Error parsing type: , name: number
    // Error parsing type: , name: languageCode
    // Error parsing type: , name: explicitStatus
    // Error parsing type: , name: heardStatus
    // Error parsing type: , name: bitrateInfo
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic, copy) NSString *albumId;
- (id)durationString;
- (id)domain;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithChapterData:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long heardStatus; // @synthesize heardStatus;
@property(nonatomic) _Bool explicitStatus; // @synthesize explicitStatus;
@property(nonatomic, copy) NSString *languageCode; // @synthesize languageCode;
@property(nonatomic) long long number; // @synthesize number;
@property(nonatomic, copy) NSArray *authors; // @synthesize authors;
@property(nonatomic, copy) NSString *audiobookId; // @synthesize audiobookId;

@end

