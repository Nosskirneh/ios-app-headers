//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface SPTPremiumDestinationCarouselStyle : NSObject <GLUEStyle>
{
    double _pageControlHeight;
    double _topContentMargin;
    double _carouselToPageControlSpacing;
    double _bottomContentMargin;
    double _defaultMinimumLineSpacing;
    double _compactMinimumLineSpacing;
}

@property(nonatomic) double compactMinimumLineSpacing; // @synthesize compactMinimumLineSpacing=_compactMinimumLineSpacing;
@property(nonatomic) double defaultMinimumLineSpacing; // @synthesize defaultMinimumLineSpacing=_defaultMinimumLineSpacing;
@property(nonatomic) double bottomContentMargin; // @synthesize bottomContentMargin=_bottomContentMargin;
@property(nonatomic) double carouselToPageControlSpacing; // @synthesize carouselToPageControlSpacing=_carouselToPageControlSpacing;
@property(nonatomic) double topContentMargin; // @synthesize topContentMargin=_topContentMargin;
@property(nonatomic) double pageControlHeight; // @synthesize pageControlHeight=_pageControlHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

