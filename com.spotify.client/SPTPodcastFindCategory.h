//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SPTPodcastFindCategory : NSObject
{
    NSString *_title;
    NSString *_descriptionText;
    NSURL *_imageURL;
    NSString *_targetURL;
    NSString *_metadata;
    long long _genreType;
}

@property(nonatomic) long long genreType; // @synthesize genreType=_genreType;
@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setTypeForIndex:(long long)arg1;
- (_Bool)isChartType;
- (id)initWithDictionary:(id)arg1;

@end

