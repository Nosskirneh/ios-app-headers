//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGGenerateCoverAction.h"

@class NSArray;

@interface ANGAlbumGenerateCoverAction : ANGGenerateCoverAction
{
    NSArray *_albums;
}

@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
- (void).cxx_destruct;
- (void)runAction;
- (id)initWithAlbums:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

