/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolygon : MKMultiPoint <MKOverlay> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centroid;
    NSArray * _interiorPolygons;
    bool  _isDefinitelyConvex;
}

@property (nonatomic) bool _isDefinitelyConvex;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *interiorPolygons;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_polygonWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)polygonEnclosingMapPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;

- (void).cxx_destruct;
- (bool)_isDefinitelyConvex;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)interiorPolygons;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_isDefinitelyConvex:(bool)arg1;

@end
