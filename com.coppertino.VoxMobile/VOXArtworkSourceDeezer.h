//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXArtworkSource.h"

@class AFHTTPSessionManager;

@interface VOXArtworkSourceDeezer : VOXArtworkSource
{
    AFHTTPSessionManager *_operationManager;
}

- (void).cxx_destruct;
- (void)fetchAlbum:(id)arg1 forArtist:(id)arg2;
- (_Bool)fetchForAlbum;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

