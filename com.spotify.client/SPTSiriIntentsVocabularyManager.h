//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTSiriIntentsVocabularyManager : NSObject
{
    id <SPTPlaylistPlatformPlaylistDataLoader> _dataLoader;
}

@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)clearLocalVocabularies;
- (void)updateLocalVocabularies;
- (id)initWithPlaylistDataLoader:(id)arg1;

@end

