//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRSynchronizerOperation.h"

@class DZRMusicLibraryRegistrer;

@interface DZRDownloadCollectionOperation : DZRSynchronizerOperation
{
    CDUnknownBlockType _checkPlayableIsAvailable;
    CDUnknownBlockType _startDownloadingPlayables;
    long long _quality;
    DZRMusicLibraryRegistrer *_registrer;
}

@property(retain, nonatomic) DZRMusicLibraryRegistrer *registrer; // @synthesize registrer=_registrer;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
@property(copy, nonatomic) CDUnknownBlockType startDownloadingPlayables; // @synthesize startDownloadingPlayables=_startDownloadingPlayables;
@property(copy, nonatomic) CDUnknownBlockType checkPlayableIsAvailable; // @synthesize checkPlayableIsAvailable=_checkPlayableIsAvailable;
- (void).cxx_destruct;
- (void)start;
- (id)initWithCollection:(id)arg1 quality:(long long)arg2 registrer:(id)arg3;

@end

