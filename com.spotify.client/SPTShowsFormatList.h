//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, NSURL, UIColor;

@interface SPTShowsFormatList : NSObject
{
    NSURL *_URI;
    NSString *_title;
    NSString *_subtitle;
    NSString *_descriptionTitle;
    NSURL *_imageURL;
    NSURL *_mosaicImageURL;
    NSURL *_backgroundVideoURL;
    UIColor *_primaryColor;
    NSArray *_items;
    NSString *_interruptions;
    NSNumber *_followerCount;
}

@property(readonly, nonatomic) NSNumber *followerCount; // @synthesize followerCount=_followerCount;
@property(readonly, copy, nonatomic) NSString *interruptions; // @synthesize interruptions=_interruptions;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) NSURL *backgroundVideoURL; // @synthesize backgroundVideoURL=_backgroundVideoURL;
@property(readonly, nonatomic) NSURL *mosaicImageURL; // @synthesize mosaicImageURL=_mosaicImageURL;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)initWithURI:(id)arg1 title:(id)arg2 subtitle:(id)arg3 descriptionTitle:(id)arg4 imageURL:(id)arg5 mosaicImageURL:(id)arg6 backgroundVideoURL:(id)arg7 primaryColor:(id)arg8 items:(id)arg9 interruptions:(id)arg10 followerCount:(id)arg11;

@end

