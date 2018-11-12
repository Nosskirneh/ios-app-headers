//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRSynchronizerOperation.h"

@class DZRMusicLibraryRegistrer;

@interface DZRDeleteCollectionOperation : DZRSynchronizerOperation
{
    CDUnknownBlockType _deleteAllQualitiesForPlayable;
    CDUnknownBlockType _didDeleteCollection;
    DZRMusicLibraryRegistrer *_registrer;
}

@property(retain, nonatomic) DZRMusicLibraryRegistrer *registrer; // @synthesize registrer=_registrer;
@property(copy, nonatomic) CDUnknownBlockType didDeleteCollection; // @synthesize didDeleteCollection=_didDeleteCollection;
@property(copy, nonatomic) CDUnknownBlockType deleteAllQualitiesForPlayable; // @synthesize deleteAllQualitiesForPlayable=_deleteAllQualitiesForPlayable;
- (void).cxx_destruct;
- (void)start;
- (id)initWithCollection:(id)arg1 registrer:(id)arg2 scheduler:(id)arg3;

@end
