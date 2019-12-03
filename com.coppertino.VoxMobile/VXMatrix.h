//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VXMatrix : NSObject
{
    unsigned long long _rows;
    unsigned long long _columns;
    NSMutableArray *_contentArray;
}

+ (id)columnsToDeleteForInputsNumber:(long long)arg1 andOutputsNumber:(long long)arg2;
+ (id)rowsToDeleteForInputsNumber:(long long)arg1 andOutputsNumber:(long long)arg2;
+ (id)identityMatrixWithSize:(unsigned long long)arg1;
+ (id)zeroMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
+ (id)matrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 initialNumber:(double)arg3;
+ (id)stereoToDoubleMonoMatrix;
+ (id)stereoUpmixMatrix;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (int)copyToArrayF:(float **)arg1;
- (int)copyToArray:(double **)arg1;
- (id)transposeMatrix;
- (id)matrixByRemovingRows:(id)arg1;
- (id)matrixByRemovingRow:(unsigned long long)arg1;
- (id)matrixByRemovingColumns:(id)arg1;
- (id)matrixByRemovingColumn:(unsigned long long)arg1;
- (_Bool)isEqualToMatrix:(id)arg1;
- (_Bool)isIdentityToSize:(unsigned long long)arg1;
- (_Bool)isZero;
- (id)matrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)multipliedMatrixWithMatrix:(id)arg1;
- (double)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)setValue:(double)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (id)description;
- (id)initIdentityMatrixWithSize:(unsigned long long)arg1;
- (id)initZeroMatrixWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)initWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 initialNumber:(double)arg3;

@end
