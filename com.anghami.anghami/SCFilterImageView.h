//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageView.h"

@class SCFilter;

@interface SCFilterImageView : SCImageView
{
    SCFilter *_filter;
}

@property(retain, nonatomic) SCFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)renderedCIImageInRect:(struct CGRect)arg1;

@end
