//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe;

@interface YTMQuiltThumbnailLayout : NSObject
{
    GIMMe *_gimme;
    unsigned long long _rowCount;
    unsigned long long _columnCount;
}

@property(readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (struct CGSize)sizeOfTileWithinImageOfSize:(struct CGSize)arg1;
- (struct CGRect)frameOfTileWithIndex:(unsigned long long)arg1 withinImageOfSize:(struct CGSize)arg2;
- (long long)numberOfTiles;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setRowCount:(unsigned long long)arg1;
- (id)initWithRowCount:(unsigned long long)arg1 columnCount:(unsigned long long)arg2;

@end
