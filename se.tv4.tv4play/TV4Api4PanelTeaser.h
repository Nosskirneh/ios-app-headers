//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TV4Api4Program;

@interface TV4Api4PanelTeaser : NSObject
{
    NSString *_imageLead;
    NSString *_text;
    NSString *_programName;
    NSString *_programNid;
    NSString *_videoAssetUrl;
    NSString *_videoId;
    NSString *_programTag;
    NSString *_imageUrl;
    TV4Api4Program *_programObject;
    NSMutableDictionary *_images;
}

+ (id)panelTeaserWithDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *images; // @synthesize images=_images;
@property(retain, nonatomic) TV4Api4Program *programObject; // @synthesize programObject=_programObject;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *programTag; // @synthesize programTag=_programTag;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *videoAssetUrl; // @synthesize videoAssetUrl=_videoAssetUrl;
@property(copy, nonatomic) NSString *programNid; // @synthesize programNid=_programNid;
@property(copy, nonatomic) NSString *programName; // @synthesize programName=_programName;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *imageLead; // @synthesize imageLead=_imageLead;
- (void).cxx_destruct;
- (id)findVideoId;
- (id)initWithDictionary:(id)arg1;

@end

