//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMRadioCardArtManager : NSObject
{
}

+ (id)requestForSmallNonArtistRadioStation:(id)arg1 size:(struct CGSize)arg2;
+ (id)requestForSmallArtistRadioStation:(id)arg1 size:(struct CGSize)arg2;
+ (id)requestForLargeNonArtistRadioStation:(id)arg1 size:(struct CGSize)arg2 defaultBackgroundImageName:(id)arg3;
+ (id)requestForLargeCuratedRadioStation:(id)arg1 size:(struct CGSize)arg2 defaultBackgroundImageName:(id)arg3;
+ (id)requestForLargeArtistRadioStation:(id)arg1 size:(struct CGSize)arg2 defaultBackgroundImageName:(id)arg3;
+ (id)squareImageUrlForStation:(id)arg1;
+ (id)uniqueStringsFromArray:(id)arg1;
+ (_Bool)isCuratedRadio:(id)arg1;
+ (_Bool)isPlaylistRadio:(id)arg1;
+ (_Bool)isGenreRadio:(id)arg1;
+ (_Bool)isArtistRadio:(id)arg1;
+ (id)artRequestForShuffleAllWithSize:(struct CGSize)arg1;
+ (id)artRequestForIFLRadioStationWithSize:(struct CGSize)arg1;
+ (id)artRequestForSmallRadioStation:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForLargeRadioStation:(id)arg1 size:(struct CGSize)arg2 defaultBackgroundImageName:(id)arg3;
+ (id)artRequestForLargeRadioStation:(id)arg1 size:(struct CGSize)arg2;

@end

