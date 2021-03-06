//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerRadio.h"

#import "DZRItemCellAdditions-Protocol.h"

@class NSArray, NSDate, NSString, NSURL;

@interface _TtC6Deezer15DeezerAudiobook : DeezerRadio <DZRItemCellAdditions>
{
    // Error parsing type: , name: chapters
    // Error parsing type: , name: chapterNumber
    // Error parsing type: , name: summary
    // Error parsing type: , name: authors
    // Error parsing type: , name: duration
    // Error parsing type: , name: genres
    // Error parsing type: , name: explicitStatus
    // Error parsing type: , name: languageCode
    // Error parsing type: , name: imageUrl
    // Error parsing type: , name: authorsString
    // Error parsing type: , name: addToFavoriteDateString
    // Error parsing type: , name: favoriteStatus
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (_Bool)canBeQueued;
- (id)illustration;
- (id)backgroundHeaderView;
- (id)headerView;
- (id)backgroundURL;
- (id)extraInfos;
- (id)chapterWithIdentifier:(id)arg1;
- (id)creatorName;
- (id)creator;
- (unsigned long long)coverType;
@property(nonatomic, copy) NSArray *tracks;
- (void)reloadChaptersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getChaptersWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDeezerId:(id)arg1;
@property(nonatomic, readonly) NSDate *addToFavoriteDate;
@property(nonatomic) _Bool favoriteStatus; // @synthesize favoriteStatus;
@property(nonatomic, copy) NSString *addToFavoriteDateString; // @synthesize addToFavoriteDateString;
@property(nonatomic, copy) NSString *authorsString; // @synthesize authorsString;
@property(nonatomic, copy) NSURL *imageUrl; // @synthesize imageUrl;
@property(nonatomic, copy) NSString *languageCode; // @synthesize languageCode;
@property(nonatomic) long long explicitStatus; // @synthesize explicitStatus;
@property(nonatomic, copy) NSArray *genres; // @synthesize genres;
@property(nonatomic) long long duration; // @synthesize duration;
@property(nonatomic, copy) NSArray *authors; // @synthesize authors;
@property(nonatomic, copy) NSString *summary; // @synthesize summary;
@property(nonatomic) long long chapterNumber; // @synthesize chapterNumber;
@property(nonatomic, copy) NSArray *chapters; // @synthesize chapters;
- (long long)listeningState;
- (id)recentlyPlayedItemInSection:(id)arg1 atIndex:(long long)arg2;
- (id)previewItemInSection:(id)arg1 atIndex:(long long)arg2;
- (long long)dzrDynamicPageInformationContextMenuItemType;
- (unsigned long long)dzrDynamicPageInformationlisteningContextOrigin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

