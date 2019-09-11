//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTSpeakerCompanionResultsPageModel : NSObject
{
    NSURL *_entityURI;
    NSURL *_imageURI;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 entityURI:(id)arg3 imageURI:(id)arg4;
- (long long)spt_icon;

@end

