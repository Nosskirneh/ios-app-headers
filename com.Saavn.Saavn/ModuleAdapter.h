//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ModuleAdapter : NSObject
{
}

+ (id)getDefaultArtistModules;
+ (id)getDefaultSongModules;
+ (id)getDefaultPlaylistModules;
+ (id)getDefaultAlbumModules;
+ (id)getMediaDetailsWithoutModuleInfo:(id)arg1;
+ (id)getDefaultShowMoreModule:(id)arg1;
+ (id)getModuleData:(id)arg1;
+ (id)getSingleModuleData:(id)arg1 fromAPIData:(id)arg2;
+ (id)getSingleModuleData:(id)arg1 fromClientData:(id)arg2;
+ (id)getSingleModuleData:(id)arg1 from:(id)arg2;

@end

