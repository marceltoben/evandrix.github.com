/*
Copyright 2008 WebAtlas
Authors : Mathieu Bastian, Mathieu Jacomy, Julian Bilcke
Website : http://www.gephi.org

This file is part of Gephi.

Gephi is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Gephi is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Gephi.  If not, see <http://www.gnu.org/licenses/>.
 */
package org.gephi.filters.api;

/**
 *
 * @author Mathieu Bastian
 * @author Martin Škurla
 */
@SuppressWarnings("unchecked")
public final class Range<T extends Number> {
    private final Class<T> rangeType;
    private T lowerBound;
    private T upperBound;

    public Range(T lowerBound, T upperBound) {
        this.lowerBound = lowerBound;
        this.upperBound = upperBound;
        this.rangeType  = (Class<T>) lowerBound.getClass();
    }

    public boolean isInRange(T value) {
        if (rangeType != value.getClass())
            throw new IllegalArgumentException("value must be " + rangeType.getName());

        return ((Comparable<T>) lowerBound).compareTo(value) <= 0 &&
               ((Comparable<T>) upperBound).compareTo(value) >= 0;
    }

    public void trimBounds(T min, T max) {
        if (((Comparable<T>) min).compareTo(lowerBound) > 0
                || ((Comparable<T>) max).compareTo(lowerBound) < 0 || lowerBound.equals(upperBound)) {
            lowerBound = min;
        }
        if (((Comparable<T>) min).compareTo(upperBound) > 0
                || ((Comparable<T>) max).compareTo(upperBound) < 0 || lowerBound.equals(upperBound)) {
            upperBound = max;
        }
    }

    public T getLowerBound() {
        return lowerBound;
    }

    public T getUpperBound() {
        return upperBound;
    }

    public Class<T> getRangeType() {
        return rangeType;
    }

    @Override
    public String toString() {
        return lowerBound.toString() + " - " + upperBound.toString();
    }
}
