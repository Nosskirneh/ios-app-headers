//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTArtistAboutLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionPageURI:(id)arg1 index:(long long)arg2 section:(id)arg3 targetURI:(id)arg4 type:(id)arg5 intent:(id)arg6;
- (void)logArtistAboutSelectedSection:(id)arg1 artistURI:(id)arg2;
- (void)logArtistAboutImageGalleryDidSwipeWithArtistURI:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

